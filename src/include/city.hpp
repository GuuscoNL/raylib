#pragma once
#include <raylib.h>
#include <vector>
#include "roadsegment.hpp"

class City {
public:
    City(float size, Shader shader);
    ~City();
    void Draw();
    Texture2D GeneratePopulationHeatmap(int offsetX = 0, int offsetY = 0, float scale = 1.0f);
    void GenerateCity(int amount);
    Texture2D GetPopulationHeatmap() const;
    Model GetPlane() const;

private:
    std::vector<RoadSegment*> roads;
    float size;
    Texture2D populationHeatmap;
    Model plane;
    Shader shader;

    void UpdatePlaneTexture();

};