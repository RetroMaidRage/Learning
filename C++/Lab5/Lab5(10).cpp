unsigned long Perimeter(int length, int width) {
    // ������� ��� ���������� ��������� ������������: 2 * (������� + ������)
    return 2UL * (static_cast<unsigned long>(length) + static_cast<unsigned long>(width));
}
