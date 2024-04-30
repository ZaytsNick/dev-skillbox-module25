#pragma once

struct point
{
    double x;
    double y;
};
void scalpel()
{
    point incision[2];
    std::cout << "Enter start incision: ";
    std::cin >> incision[0].x >> incision[0].y;
    std::cout << "Enter end incision: ";
    std::cin >> incision[1].x >> incision[1].y;
    std::cout << "You have made a cut from " << incision[0].x << incision[0].y << " to " << incision[1].x << incision[1].y << " points" << std::endl;
}
void hemostat()
{
    point clamp;
    std::cout << "Enter clamp: ";
    std::cin >> clamp.x >> clamp.y;
    std::cout << "You have installed the clamp at the " << clamp.x << clamp.y << " point";
}
void tweezers()
{
    point tweezers;
    std::cout << "Enter tweezers: ";
    std::cin >> tweezers.x >> tweezers.y;
    std::cout << "You applied tweezers to the " << tweezers.x << tweezers.y << " point";
}
void suture()
{
    point seam[2];
    std::cout << "Enter start seam: ";
    std::cin >> seam[0].x >> seam[0].y;
    std::cout << "Enter end seam: ";
    std::cin >> seam[1].x >> seam[1].y;
    std::cout << "You stitched from" << seam[0].x << seam[0].y << " to " << seam[1].x << seam[1].y << " points" << std::endl;
}