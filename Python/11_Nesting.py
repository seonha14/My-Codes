# Nesting Dictionary in Dictionary (with List)

travel_log = {
    "France": {"cities_visited": ["Paris", "Oslo", "Lagos"], "total_visits": 12},
    "Germany": {"cities_visited": ["Jakarta", "Abu Dhabi", "Jaipur", "Cairo", "New York"], "total_visits": 5}
}

print(travel_log["France"]["cities_visited"][1])
print(travel_log["France"]["total_visits"])

# Nesting dictionary in list

list_log = [
    {
        "country": "France",
        "cities_visited": ["Paris", "Oslo", "Lagos"],
        "total_visits": 12
    },
    {
        "country": "Germany",
        "cities_visited": ["Jakarta", "Abu Dhabi", "Jaipur", "Cairo", "New York"],
        "total_visits": 5
    }
]

print(list_log[0]["country"])
