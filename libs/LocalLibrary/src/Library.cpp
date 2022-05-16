#include "Library.h"

int Library::init(const char *dir_name ) {
    this->dir_name = dir_name;
    this->motor = new Adafruit_DRV2605();
}
