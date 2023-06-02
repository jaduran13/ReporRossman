#include<stdio.h>
#include "addProd.c"
#include "showProd.c"
#include "searchProd.c"
void menuAlmacen() {
    int opcion;

    do {
        system("cls");
        printf("=== Menu Almacen ===\n");
        printf("1) Agregar Producto\n");
        printf("2) Buscar Producto\n");
        printf("3) Modificar Producto\n");
        printf("4) Eliminar Producto\n");
        printf("5) Mostrar Productos\n");
        printf("6) Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarProducto();
                break;
            case 2:
                buscarProducto(totalProductos);
                break;
            case 3:
                //modificarProducto();
                break;
            case 4:
                //eliminarProducto();
                break;
            case 5: ;
                mostrarProductos();
                break;
            case 6:
                printf("Saliendo del menú Almacén...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                break;
        }

        printf("\n");
    } while (opcion != 6);
}
