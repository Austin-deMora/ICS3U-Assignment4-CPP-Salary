// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: May 2021
// This program finds the bonus net amount of yearly salaries

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This function calculates the bonus net amount of yearly salaries
    std::string yearly_salary_string;
    int service_years;
    int yearly_salary;
    float net_amount;

    // input
    std::cout << "Enter years of service: ";
    std::cin >> service_years;
    std::cout << "Enter yearly salary: ";
    std::cin >> yearly_salary_string;
    std::cout << "" << std::endl;

    // process & output
    try {
        yearly_salary = std::stoi(yearly_salary_string);
        net_amount = yearly_salary * 1.05;

        if (yearly_salary < 0) {
            throw std::invalid_argument("This wasn't an integer");
    }
        if (service_years > 5) {
            if (yearly_salary * 1.05) {
            std::cout << "Your net amount with bonus is $" << net_amount <<
            std::endl;
        }
        } else {
            std::cout << "" << std::endl;
            std::cout << "You haven't worked long enough" << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "Invalid Input" << std::endl;
    }
}
