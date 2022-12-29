travel_log = [
    {
        "country": "France",
        "visits": 12,
        "cities": ["Paris", "Lille", "Dijon"]
    },
    {
        "country": "Germany",
        "visits": 5,
        "cities": ["Berlin", "Hamburg", "Stuttgart"]
    },
]


def add_new_country(fcountry, fvisits, fcities):
    new_country = {}  # creating an empty dictionary
    new_country["country"] = fcountry  # adding entries one by one
    new_country["visits"] = fvisits
    new_country["cities"] = fcities
    travel_log.append(new_country)  # adding to the list using append()


add_new_country("Russia", 2, ["Moscow", "Saint Petersburg"])
print(travel_log)
