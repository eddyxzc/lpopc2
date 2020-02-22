//
// Created by eddy on 1/11/20.
//

#ifndef LPOPC2_CONTINUESFUNCTION_HPP
#define LPOPC2_CONTINUESFUNCTION_HPP
#include<functional>
#include<vector>
#include "LpConf.h"

struct ConVars{
    int phase_num;
    vec time_;
    mat state_;
    mat contol_;
    mat parameter_;
};
struct EndVars
{
	int phase_num;
	double time_0;
	double time_F;
	vec state_0;
	vec state_F;
	vec parameter;
};
struct ContinueFunc
{

};

bool ContinueFuncs(std::vector<std::function<bool(ConVars&,mat,mat,mat)> >);
 //                                                    dynamic,path.intgrade
bool EndpointFuncs(std::vector<std::function<bool(EndVars&,vec)> >);



#endif //LPOPC2_CONTINUESFUNCTION_HPP
