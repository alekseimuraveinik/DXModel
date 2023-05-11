
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEntryValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener || defined(INCLUDE_DXMARKETOrderEntryValueListener))
#define DXMARKETOrderEntryValueListener_

@class DXMARKETValidationInfo;

@protocol DXMARKETOrderEntryValueListener < JavaObject >

- (void)valueUpdatedWithLong:(jlong)newValue;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEntryValueListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEntryValueListener)

#define ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener DXMARKETOrderEntryValueListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener")
