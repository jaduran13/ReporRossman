#include<stdio.h>

void mostrarProductos() {
    printf("Productos registrados:\n");
    printf("==============================\n");
    for (int i = 0; i < totalProductos; i++) {
        printf("ID: %d\n", producto[i].id);
        printf("Nombre: %s\n", producto[i].nombre);
        printf("Tipo: %d\n", producto[i].tipo);
        printf("Ubicación: %d\n", producto[i].ubicacion);
        printf("Precio: %.2f\n", producto[i].precio);
        printf("Cantidad: %d\n", producto[i].cantidad);
        printf("==============================\n");
    }
    system("pause");
}