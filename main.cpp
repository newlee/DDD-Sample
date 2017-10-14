#include <iostream>
#include "model.h"
#include "repository.h"
#include "service.h"
#include "gateway.h"
#include "api.h"

using namespace domain;
using namespace repositories;
using namespace services;
using namespace gateways;

int main(int argc, char *argv[])
{
    repositories::CargoRepository* cargoRepo = new repositories::CargoRepository();
    CargoProviderImpl* provider = new CargoProviderImpl();
    services::CargoService* service = new services::CargoService(cargoRepo, provider);
    api::Api* api = new api::Api(service);
    api::CreateCargoMsg* msg = new api::CreateCargoMsg();
    msg->Id = 1;
    msg->AfterDays = 10;
    api->CreateCargo(msg);

    std::cout<< cargoRepo->FindById(1)->getId()<<"\n";
    return 0;
}