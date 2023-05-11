
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSignUpTOVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor || defined(INCLUDE_DXSignUpTOVisitor))
#define DXSignUpTOVisitor_

@class DXSignUpTO;

@protocol DXSignUpTOVisitor < JavaObject >

- (void)visitShortRegistrationWithDXSignUpTO:(DXSignUpTO *)signUpTO;

- (void)visitFullRegistrationWithDXSignUpTO:(DXSignUpTO *)signUpTO;

@end

J2OBJC_EMPTY_STATIC_INIT(DXSignUpTOVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXSignUpTOVisitor)

#define ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor DXSignUpTOVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTOVisitor")
