//Desarrollar un programa que permita realizar las siguientes acciones sobre un inventario:
//1. Listar los Productos (Se debe listar los productos con las columnas: Numero, Nombre, Categoria, Marca y Precio).
//2. Buscar Productos
//   - Por marca (Se debe ingresar la marca a buscar y se debe imprimir todos los productos con).
//   - Por categoría (Se debe ingresar la categoría a buscar y se debe imprimir todos los prodcutos).
//   - Por precio menor de: (Ingresar el precio límite, se debe imprimimr todos los productos con).
//3. Editar Producto (SE debe ingresar el número del producto y después editar los campos: Nombre, Categoría, Marca y Precio).
#include <stdio.h>
#include "funciones.h"

int main (){
char productos[10][3][40]={{"Jordan","Zapatos","Nike"},
                           {"Classic","Camisas","Nike"},
                           {"Terrex","Zapatos","Adidas"},
                           {"Classic","Zapatos","Puma"},
                           {"Venture","Camisas","Nike"},
                           {"Superst","Zapatos","Adidas"},
                           {"Terrex","Chompas","Adidas"},
                           {"Classic","Chompas","Puma"},
                           {"Venture","Chompas","Adidas"},
                           {"Hoddie","Chompas","Puma"}};
double precio[10] = {120,40,122,89,150,110,150,120,40,45};
int indice[10] = {1,2,3,4,5,6,7,8,9,10};
int opcion1,opcion2,opcion3;
do{
    printf("Elija una opcion:\n1.Listar Prodcutos\n2.Buscar Productos\n3.Editar Productos.\n>>");
    scanf("%d",&opcion1);
        switch (opcion1)
        {
        case 1:
            listarProductos(productos,precio,indice);
            break;
        case 2:
            printf("Buscar por:\n1.Marca\n2.Categoría\n3.Precio Menor de\n>>");
            scanf("%d",&opcion2);
            switch (opcion2)
            {
            case 1:
                buscarXMarca(productos,precio);
                break;
            case 2:
                buscarXCategoria(productos,precio);
                break;
            case 3:
                buscarXPrecioMenor(productos,precio);
                break;
            default:
                break;
            }
            break;
        case 3:
            editarProducto(productos,precio,indice);
        default:
        break;
        }
        printf("Desea elegir otra opción:\n1.Si\n2.No\n>>");
        scanf("%d",&opcion3);
    }while(opcion3==1);
    return 0;    
}