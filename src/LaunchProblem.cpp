//
// Created by eddy on 1/26/20.
//

#include "LaunchProblem.hpp"
#include "LpConf.h"
struct ConVar{
    int phase_num;
    vec time_;
    mat state_;
    mat contol_;
    mat parameter_;
};
struct EndVar
{
    int phase_num;
    double time_0;
    double time_F;
    vec state_0;
    vec state_F;
    vec parameter;
};
struct Function{
    vec LagrangeCost(const ConVar&)
    vec MayerCost(const& EndVar)
    vec Dynamic(const ConVar&);
    vec Path(const ConVar&);
    vec Event(const arma)

}