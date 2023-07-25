#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct dragao {
    int forca;
    int bonus;
};

int order_drag(dragao d1, dragao d2) {
    return d1.forca < d2.forca;
}

int main() {
    int forca, qtdDragoes, perdeu = 0;
    vector<dragao> dragoes;
    
    cin >> forca;
    cin >> qtdDragoes;

    for (int i = 0; i < qtdDragoes; i++) {
        dragao d;
        cin >> d.forca;
        cin >> d.bonus;

        dragoes.push_back(d);
    }

    sort(dragoes.begin(), dragoes.end(), order_drag);

    for (int i = 0; i < dragoes.size(); i++) {
        if (forca <= dragoes[i].forca) {
            perdeu = 1;
            break;
        }
        else
            forca += dragoes[i].bonus;
    }

    if (perdeu)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
