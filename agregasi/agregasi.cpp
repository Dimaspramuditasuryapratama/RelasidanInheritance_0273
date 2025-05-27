#include <iostream>
#include <vector>
using namespace std;

#include "ibu.h"
#include "anak.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varIbu->tambahkanAnak(varAnak1);
    varIbu->tambahkanAnak(varAnak2);
    varIbu2->tambahkanAnak(varAnak3);
    varIbu2->tambahkanAnak(varAnak1);

    
}