#include "inoutmat.hh"

void readm_int(Matriz& mat) {
    int n, m;
    cin >> n >> m;

    mat = Matriz(n, Fila(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }
}

void readm_int_def(Matriz& mat) {
    int n = mat.size();
    
    if (n > 0) {
        int m = mat[0].size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }
    }
}

void readm_int_mult(Seq& sec, int num) {
    sec = Seq(num);

    for (int i = 0; i < num; ++i) {
        int n, m;
        cin >> n >> m;

        sec[i] = Matriz(n, Fila(m));

        for (int j = 0; j < n; ++j) {
            for (int h = 0; h < m; ++h) {
                cin >> sec[i][j][h];
            }
        }
    }
}

void readm_int_def_mult(Seq& sec, int num, int n, int m) {
    sec = Seq(num, Matriz(n, Fila(m)));

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int h = 0; h < m; ++h) {
                cin >> sec[i][j][h];
            }
        }
    }
}

void writem_int(const Matriz& mat) {

    for (int i = 0; i < mat.size(); ++i) {
        bool first = true;

        for (int j = 0; j < mat[0].size(); ++j) {
            if (!first) cout << " " << mat[i][j];
            else {
                first = false; 
                cout << mat[i][j];
            }
        }

        cout << endl;
    }
}

void writem_int_mult(const Seq& secm, int ini, int fin) {
    if (ini == 0 and fin == 0) fin = secm.size() - 1;
    
    for (int i = ini; i <= fin; ++i) {
        for (int j = 0; j < secm[i].size(); ++j) {
            bool first = true;

            for (int h = 0; h < secm[i][0].size(); ++h) {
                if (!first) cout << " " << secm[i][j][h];
                else  {
                    first = false;
                    cout << secm[i][j][h];
                }
            }

            cout << endl;
        }
    }
}