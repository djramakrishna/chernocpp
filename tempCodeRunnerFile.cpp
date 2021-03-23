 auto lambda = [&a](int value){ std::cout << "Value :" << a << std::endl; };
    auto lambda = [=](int value) mutable { a = 5; std::cout << "Value :" << value << std::endl; };