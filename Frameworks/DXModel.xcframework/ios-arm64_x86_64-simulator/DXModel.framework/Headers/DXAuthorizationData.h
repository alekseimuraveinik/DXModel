
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAuthorizationData_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData || defined(INCLUDE_DXAuthorizationData))
#define DXAuthorizationData_

@protocol DXAuthorizationData_Visitor;

@protocol DXAuthorizationData < JavaObject >

- (id)visitByWithDXAuthorizationData_Visitor:(id<DXAuthorizationData_Visitor>)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAuthorizationData)

J2OBJC_TYPE_LITERAL_HEADER(DXAuthorizationData)

#define ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData DXAuthorizationData

#endif

#if !defined (DXAuthorizationData_Visitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData || defined(INCLUDE_DXAuthorizationData_Visitor))
#define DXAuthorizationData_Visitor_

@class DXCoreSSOTokenTO;
@class DXCoreSessionKeyTO;
@class DXCredentialsTO;
@class DXSSOTokenTO;

@protocol DXAuthorizationData_Visitor < JavaObject >

- (id)processWithDXCredentialsTO:(DXCredentialsTO *)credentials;

- (id)processWithDXSSOTokenTO:(DXSSOTokenTO *)token;

- (id)processWithDXCoreSessionKeyTO:(DXCoreSessionKeyTO *)key;

- (id)processWithDXCoreSSOTokenTO:(DXCoreSSOTokenTO *)token;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAuthorizationData_Visitor)

J2OBJC_TYPE_LITERAL_HEADER(DXAuthorizationData_Visitor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData")
