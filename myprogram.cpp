#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include "nlohmann/json.hpp"

struct Record {
    std::string country;
    int creationFilm = 0;
    std::vector<std::string> filmingStudio;
    std::vector<std::string> screenWriters;
    std::vector<std::string> directors;
    std::vector<std::string> producer;
    std::map<std::string, std::string> mainRoles;
};

nlohmann::json Severance() {
    Record record;

    record.country = "USA";

    record.creationFilm = 2022;

    record.filmingStudio.emplace_back("Apple TV+");

    record.screenWriters.emplace_back("Anna Ouyang Moench");
    record.screenWriters.emplace_back("Wei-Ning Yu");
    record.screenWriters.emplace_back("Chris Black");
    record.screenWriters.emplace_back("Andrew Colville");
    record.screenWriters.emplace_back("Kari Drake");
    record.screenWriters.emplace_back("Anna Ouyang Moench");
    record.screenWriters.emplace_back("Helen Leigh");

    record.directors.emplace_back("Ben Stiller");
    record.directors.emplace_back("Aoife McArdle");

    record.producer.emplace_back("Caroline Baron");
    record.producer.emplace_back("Mohamad el Masri");
    record.producer.emplace_back("John Cameron");
    record.producer.emplace_back("Jackie Cohn");
    record.producer.emplace_back("Dan Erickson");
    record.producer.emplace_back("Jill Footlick");
    record.producer.emplace_back("Paul Leonardo Jr.");
    record.producer.emplace_back("Aoife McArdle");
    record.producer.emplace_back("Nicholas Weinstock");

    record.mainRoles["Mark"] = "Adam Scott";
    record.mainRoles["Dylan"] = "Zach Cherry";
    record.mainRoles["Helly"] = "Brittney Lower";
    record.mainRoles["Milchick"] = "Tramell Tillman";
    record.mainRoles["Devon"] = "Jen Tullock";
    record.mainRoles["Ms. Casey"] = "Dichen Lachman";
    record.mainRoles["Ricken"] = "Michael Chernus";
    record.mainRoles["Irving"] = "John Turturro";
    record.mainRoles["Burt"] = "Christopher Walken";
    record.mainRoles["Harmony Cobel"] = "Patricia Arquette";

    nlohmann::json dict = {
            {"country", record.country},
            {"creationFilm", record.creationFilm},
            {"filmingStudio", record.filmingStudio},
            {"screenwriters", record.screenWriters},
            {"directors", record.directors},
            {"producer", record.producer},
            {"mainRoles", record.mainRoles},
    };
    return dict;
}

nlohmann::json BFromTheP() {
    Record record;

    record.country = "USA";

    record.creationFilm = 1998;

    record.filmingStudio.emplace_back("Forge");
    record.filmingStudio.emplace_back("Midnight Sun Pictures");
    record.filmingStudio.emplace_back("New Line Cinema");

    record.screenWriters.emplace_back("Hugh Wilson");
    record.screenWriters.emplace_back("Bill Kelly");

    record.directors.emplace_back("Hugh Wilson");

    record.producer.emplace_back("Renny Harlin");
    record.producer.emplace_back("Hugh Wilson");
    record.producer.emplace_back("Mary Kane");
    record.producer.emplace_back("Sunil Perkash");
    record.producer.emplace_back("Claire Rudnick Polstein");
    record.producer.emplace_back("Amanda Stern");

    record.mainRoles["Adam"] = "Brendan Fraser";
    record.mainRoles["Eve"] = "Alicia Silverstone";
    record.mainRoles["Calvin"] = "Christopher Walken";
    record.mainRoles["Helen"] = "Sissy Spacek";
    record.mainRoles["Troy"] = "David Foley";
    record.mainRoles["Soda Jerk"] = "Joey Slotnick";
    record.mainRoles["Mom"] = "Dale Raoul";
    record.mainRoles["Adam age 3½"] = "Hayden Tank";
    record.mainRoles["Adam age 11"] = "Douglas Smith";
    record.mainRoles["Adam age 8"] = "Ryan Sparks";

    nlohmann::json dict = {
            {"country", record.country},
            {"creationFilm", record.creationFilm},
            {"filmingStudio", record.filmingStudio},
            {"screenwriters", record.screenWriters},
            {"directors", record.directors},
            {"producer", record.producer},
            {"mainRoles", record.mainRoles},
    };
    return dict;
}

nlohmann::json Former() {
    Record record;

    record.country = "Russia";

    record.creationFilm = 2020;

    record.filmingStudio.emplace_back("START");

    record.screenWriters.emplace_back("Alexey Trotsyuk");
    record.screenWriters.emplace_back("Eldar Velikoretsky");
    record.screenWriters.emplace_back("Ekaterina Surovtseva");
    record.screenWriters.emplace_back("Ruslan Doshchanov");

    record.directors.emplace_back("Ivan Kitaev");

    record.producer.emplace_back("Alexey Trotsyuk");
    record.producer.emplace_back("Edward Iloyan");
    record.producer.emplace_back("Vitaly Shlyappo");
    record.producer.emplace_back("Denis Zhalinsky");
    record.producer.emplace_back("Mikhail Tkachenko");
    record.producer.emplace_back("Eldar Velikoretsky");
    record.producer.emplace_back("Yuri Miroshnichenko");
    record.producer.emplace_back("Andrey Rassudov");

    record.mainRoles["Yana Mironova"] = "Lyubov Aksyonova";
    record.mainRoles["Ilya Rusakov"] = "Denis Shvedov";
    record.mainRoles["Alexander Borisovich Mironov, Yana's father"] = "Vitaly Khaev";
    record.mainRoles["Andrew, brother of Ilya"] = "Grigory Chaban";
    record.mainRoles["Grigorovich"] = "Leonid Gromov";
    record.mainRoles["Egor"] = "Daniil Vakhrushev";
    record.mainRoles["Vasilisa"] = "Linda Lapinsh";
    record.mainRoles["Oksana"] = "Anna Glaube";
    record.mainRoles["Rita Volkova, Alexander's mistress"] = "Sofia Lebedeva";
    record.mainRoles["Victor"] = "Sergey Lanbamin";

    nlohmann::json dict = {
            {"country", record.country},
            {"creationFilm", record.creationFilm},
            {"filmingStudio", record.filmingStudio},
            {"screenwriters", record.screenWriters},
            {"directors", record.directors},
            {"producer", record.producer},
            {"mainRoles", record.mainRoles},
    };
    return dict;
}

nlohmann::json SurvivalGame() {
    Record record;

    record.country = "Russia";

    record.creationFilm = 2020;

    record.filmingStudio.emplace_back("Premier");

    record.screenWriters.emplace_back("Vyacheslav Yakovlev");
    record.screenWriters.emplace_back("Maxim Esaulov");
    record.screenWriters.emplace_back("Kirill Mukhanov");
    record.screenWriters.emplace_back("Ekaterina Popechiteleva");
    record.screenWriters.emplace_back("Yuri Sapronov");
    record.screenWriters.emplace_back("Sergei Kaluzhanov");

    record.directors.emplace_back("Karen Hovhannisyan");

    record.producer.emplace_back("Valery Fedorovich");
    record.producer.emplace_back("Evgeny Nikishov");
    record.producer.emplace_back("Nelli Yaralova");
    record.producer.emplace_back("Maria Shukhnina");
    record.producer.emplace_back("Yuri Sapronov");
    record.producer.emplace_back("Polina Ivanova");
    record.producer.emplace_back("Olga Raevich");
    record.producer.emplace_back("Denis Dubovik");
    record.producer.emplace_back("Julia Arapova");

    record.mainRoles["Alexandra Bortich"] = "Alexandra Bortich";
    record.mainRoles["Alexey Chadov"] = "Alexey Chadov";
    record.mainRoles["Igor Vernik, leading"] = "Igor Vernik";
    record.mainRoles["Victoria Kempinnen, deputy assistant / Olga Kempinnen, freelancer"] = "Linda Lapinsh";
    record.mainRoles["Nicholas Saturday, photographer"] = "Vladimir Veryovochkin";
    record.mainRoles["Suren Bagrikyan, restaurateur"] = "Benik Arakelyan";
    record.mainRoles["Tatiana Novak, journalist"] = "Anastasia Todorescu";
    record.mainRoles["Semyon Prikhodko, plumber"] = "Valery Skorokosov";
    record.mainRoles["Andrey Trubitsyn, System Administrator"] = "David Pelia";
    record.mainRoles["Marina Cherkizova, cook"] = "Julia Volkova";

    nlohmann::json dict = {
            {"country", record.country},
            {"creationFilm", record.creationFilm},
            {"filmingStudio", record.filmingStudio},
            {"screenwriters", record.screenWriters},
            {"directors", record.directors},
            {"producer", record.producer},
            {"mainRoles", record.mainRoles},
    };
    return dict;
}

nlohmann::json Beetles() {
    Record record;

    record.country = "Russia";

    record.creationFilm = 2019;

    record.filmingStudio.emplace_back("START");

    record.screenWriters.emplace_back("Maxim Peshkov");
    record.screenWriters.emplace_back("Sergei Notary");
    record.screenWriters.emplace_back("Alexey Vasiliev");
    record.screenWriters.emplace_back("Artem Klinkov");
    record.screenWriters.emplace_back("Julia Abramchik");

    record.directors.emplace_back("Konstantin Smirnov");
    record.directors.emplace_back("Konstantin Kolesov");
    record.directors.emplace_back("Maxim Peshkov");

    record.producer.emplace_back("Vyacheslav Dusmukhametov");
    record.producer.emplace_back("Semyon Slepakov");
    record.producer.emplace_back("Artur Janibekyan");
    record.producer.emplace_back("Andrey Levin");
    record.producer.emplace_back("Taimuraz Badziev");
    record.producer.emplace_back("Zaurbek Bogov");
    record.producer.emplace_back("Gor Sargsyan");
    record.producer.emplace_back("Maxim Peshkov");
    record.producer.emplace_back("Sergei Notary");
    record.producer.emplace_back("Ilya Zaitsev");
    record.producer.emplace_back("Alexander Idiatulin");

    record.mainRoles["Nikita Davydov"] = "Vyacheslav Chepurchenko";
    record.mainRoles["Denis Popov"] = "Pavel Komarov";
    record.mainRoles["Artemy Schneider"] = "Vadim Dubrovin";
    record.mainRoles["Maslov, precinct"] = "Maxim Lagashkin";
    record.mainRoles["Irina, general store saleswoman"] = "Ekaterina Stulova";
    record.mainRoles["Marchenko"] = "Igor Vernik";
    record.mainRoles["Tolik"] = "Vladimir Epifantsev";
    record.mainRoles["shift worker"] = "Alexander Robak";
    record.mainRoles["vet"] = "Anatoly Zhuravlev";
    record.mainRoles["Anya, Nikita's girlfriend"] = "Anastasia Akatova";

    nlohmann::json dict = {
            {"country", record.country},
            {"creationFilm", record.creationFilm},
            {"filmingStudio", record.filmingStudio},
            {"screenwriters", record.screenWriters},
            {"directors", record.directors},
            {"producer", record.producer},
            {"mainRoles", record.mainRoles},
    };
    return dict;
}

void Separation(std::map<std::string, nlohmann::json>& separation) {
    std::ifstream file("record.json");
    if (!file.is_open()) {
        std::cerr << "File not open...\n";
        return;
    }

    nlohmann::json dictRead;
    file >> dictRead;
    file.close();

    std::string key;
    for (auto& el : dictRead.items()) {
        separation.insert(std::pair<std::string, nlohmann::json>(el.key(), el.value()));
    }
}

int main() {
    std::ofstream file("record.json");
    if (!file.is_open()) {
        std::cerr << "File not open...\n";
        return 0;
    }


    nlohmann::json dict = {
            {"Severance", Severance()},
            {"Blast from the Past", BFromTheP()},
            {"Former", Former()},
            {"Survival game", SurvivalGame()},
            {"Beetles", Beetles()},
    };

    file << dict;
    file.close();

    std::map<std::string, nlohmann::json> separation;
    Separation(separation);//разделение json словаря над подсловари с ключами

    std::cout << "Enter the actor's first or last name:";
    std::string firstNameOrLastName;
    std::cin >> firstNameOrLastName;

    for (std::map<std::string, nlohmann::json>::iterator it = separation.begin(); it != separation.end(); ++it) {
        for (auto& el : it->second["mainRoles"].items()) {
            std::string text = el.value();
            bool found = text.find(firstNameOrLastName) != std::string::npos;
            if (found)
                std::cout << "actor: " << text << ", role: " << el.key() << ", film reel: " << it->first << '\n';
        }
    }
}