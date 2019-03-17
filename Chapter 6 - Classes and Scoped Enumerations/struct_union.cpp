//Structs with Unions
//struct_union.cpp
#include <iostream>
#include <cstring>
enum ProductId{sku, upc};
typedef struct{
    ProductId id;
    union{
        int sku;
        char upc[13];
    } code;
} Product;
int main(){
    Product p[2];
    p[0].id = sku;
    p[0].code.sku = 4789;
    p[1].id = upc;
    std::strcpy(p[1].code.upc, "0360002607555");
    for(int i = 0; i < 2; i++){
        switch(p[i].id){
            case sku:
            std::cout << p[i].code.sku << std::endl;
            break;
        case upc:
            std::cout << p[i].code.upc << std::endl;
            break;
        }
    }
    return 0;
}