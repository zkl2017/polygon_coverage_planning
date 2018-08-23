#ifndef MAV_2D_COVERAGE_PLANNING_COST_FUNCTIONS_EUCLIDEAN_COST_FUNCTION_H_
#define MAV_2D_COVERAGE_PLANNING_COST_FUNCTIONS_EUCLIDEAN_COST_FUNCTION_H_

#include <vector>
#include <functional>

#include <mav_coverage_planning_comm/cgal_definitions.h>

namespace mav_coverage_planning {

typedef std::function<double(const std::vector<Point_2>& path)>
    PathCostFunctionType;
typedef std::function<double(const Point_2& a, const Point_2& b)>
    SegmentCostFunctionType;

// Given a vector of waypoints, compute its euclidean distances.
double computeEuclideanPathCost(const std::vector<Point_2>& path);

// Given two waypoints, compute its euclidean distance.
double computeEuclideanSegmentCost(const Point_2& from, const Point_2& to);

}  // namespace mav_coverage_planning

#endif  // MAV_2D_COVERAGE_PLANNING_COST_FUNCTIONS_EUCLIDEAN_COST_FUNCTION_H_
