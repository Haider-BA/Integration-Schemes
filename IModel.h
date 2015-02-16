/* 
 * File:   IModel.hpp
 * Author: user
 *
 * Created on 29. April 2009, 23:05
 */

#ifndef _IMODEL_HPP
#define	_IMODEL_HPP

#include <string>


class IModel
{
public:
    IModel(const std::string &sName, unsigned dim);
    unsigned GetDim() const;
    std::string GetName() const;

    virtual void Eval(double *state, double time, double *deriv_in) = 0;
    virtual bool IsFinished(double *state) = 0;

private:
    unsigned m_dim;
    std::string m_sName;
};

#endif	/* _IMODEL_HPP */

