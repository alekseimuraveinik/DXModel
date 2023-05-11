
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETActionPerformerProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider || defined(INCLUDE_DXMARKETActionPerformerProvider))
#define DXMARKETActionPerformerProvider_

@protocol PSActionPerformer;
@protocol PSTypeProvider;

@protocol DXMARKETActionPerformerProvider < JavaObject >

- (id<PSActionPerformer>)performerWithPSTypeProvider:(id<PSTypeProvider>)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETActionPerformerProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETActionPerformerProvider)

#define ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider DXMARKETActionPerformerProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthActionPerformerProvider")
