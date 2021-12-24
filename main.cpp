const char *type_of_int(int x) {
    if(x > 0) return "positive";
    else if (x < 0) return "negative";
    else return "null";
}


int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}