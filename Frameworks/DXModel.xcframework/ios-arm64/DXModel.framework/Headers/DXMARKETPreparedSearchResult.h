
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPreparedSearchResult_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult || defined(INCLUDE_DXMARKETPreparedSearchResult))
#define DXMARKETPreparedSearchResult_

@protocol JavaUtilList;

@interface DXMARKETPreparedSearchResult : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)alreadyInList
                              withJavaUtilList:(id<JavaUtilList>)searchResult;

- (id<JavaUtilList>)getAlreadyInList;

- (id<JavaUtilList>)getSearchResult;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPreparedSearchResult)

FOUNDATION_EXPORT void DXMARKETPreparedSearchResult_initWithJavaUtilList_withJavaUtilList_(DXMARKETPreparedSearchResult *self, id<JavaUtilList> alreadyInList, id<JavaUtilList> searchResult);

FOUNDATION_EXPORT DXMARKETPreparedSearchResult *new_DXMARKETPreparedSearchResult_initWithJavaUtilList_withJavaUtilList_(id<JavaUtilList> alreadyInList, id<JavaUtilList> searchResult) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPreparedSearchResult *create_DXMARKETPreparedSearchResult_initWithJavaUtilList_withJavaUtilList_(id<JavaUtilList> alreadyInList, id<JavaUtilList> searchResult);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPreparedSearchResult)

@compatibility_alias ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult DXMARKETPreparedSearchResult;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentPreparedSearchResult")
