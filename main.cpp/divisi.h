#ifndef DIVISI_H
#define DIVISI_H
#include <iostream>
#include <string>
using namespace std;

struct elmPeg;
typedef struct elmPeg *addrPeg;

struct elmDiv;
typedef struct elmDiv *addrDiv;

struct elmDiv {
    int idDivisi;
    string namaDivisi;
    addrDiv next;
    addrDiv prev;
    addrPeg firstPeg;
};

struct listDiv {
    addrDiv first;
    addrDiv last;
};

void createListDiv(listDiv &L);
addrDiv allocateDiv(int id, string nama);
void insertFirstDiv(listDiv &L, addrDiv p);
void insertLastDiv(listDiv &L, addrDiv p);
void insertAfterDiv(addrDiv prec, addrDiv p);
void deleteFirstDiv(listDiv &L, addrDiv &p);
void deleteLastDiv(listDiv &L, addrDiv &p);
void deleteAfterDiv(addrDiv prec, addrDiv &p);
addrDiv findDiv(listDiv L, int idDivisi);
void showDivisi(listDiv L);
void printDiv(addrDiv p);

#endif // DIVISI_H_INCLUDED
