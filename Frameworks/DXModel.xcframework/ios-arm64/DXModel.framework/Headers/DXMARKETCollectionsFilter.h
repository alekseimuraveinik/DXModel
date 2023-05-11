
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCollectionsFilter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilCollectionsFilter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCollectionsFilter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCollectionsFilter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilCollectionsFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCollectionsFilter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCollectionsFilter || defined(INCLUDE_DXMARKETCollectionsFilter))
#define DXMARKETCollectionsFilter_

@protocol DXMARKETPredicate;
@protocol JavaUtilList;

@interface DXMARKETCollectionsFilter : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (id<JavaUtilList>)filterWithJavaUtilList:(id<JavaUtilList>)unfiltered
                     withDXMARKETPredicate:(id<DXMARKETPredicate>)predicate;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCollectionsFilter)

FOUNDATION_EXPORT void DXMARKETCollectionsFilter_init(DXMARKETCollectionsFilter *self);

FOUNDATION_EXPORT DXMARKETCollectionsFilter *new_DXMARKETCollectionsFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCollectionsFilter *create_DXMARKETCollectionsFilter_init(void);

FOUNDATION_EXPORT id<JavaUtilList> DXMARKETCollectionsFilter_filterWithJavaUtilList_withDXMARKETPredicate_(id<JavaUtilList> unfiltered, id<DXMARKETPredicate> predicate);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCollectionsFilter)

@compatibility_alias ComDevexpertsDxmarketClientUtilCollectionsFilter DXMARKETCollectionsFilter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCollectionsFilter")
