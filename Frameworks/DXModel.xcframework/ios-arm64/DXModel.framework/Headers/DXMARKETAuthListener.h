
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthAuthListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthAuthListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAuthListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthListener || defined(INCLUDE_DXMARKETAuthListener))
#define DXMARKETAuthListener_

@class DXAbstractAuthorizationDataTO;
@class DXLoginRequestTO;
@class DXLoginResultTO;
@protocol DXMARKETActionPerformerProvider;
@protocol DXMARKETAuthPerformer;

@protocol DXMARKETAuthListener < JavaObject >

- (jboolean)awaitLoginWithDXMARKETAuthPerformer:(id<DXMARKETAuthPerformer>)authPerformer
            withDXMARKETActionPerformerProvider:(id<DXMARKETActionPerformerProvider>)extras;

- (jboolean)awaitLoginWithDXMARKETAuthPerformer:(id<DXMARKETAuthPerformer>)authPerformer
              withDXAbstractAuthorizationDataTO:(DXAbstractAuthorizationDataTO *)authData
            withDXMARKETActionPerformerProvider:(id<DXMARKETActionPerformerProvider>)extras;

- (void)onActionPerformedWithDXLoginRequestTO:(DXLoginRequestTO *)request
                          withDXLoginResultTO:(DXLoginResultTO *)result;

- (void)showProgressWithDXLoginRequestTO:(DXLoginRequestTO *)request;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAuthListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAuthListener)

#define ComDevexpertsDxmarketClientApplicationAuthAuthListener DXMARKETAuthListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthListener")
