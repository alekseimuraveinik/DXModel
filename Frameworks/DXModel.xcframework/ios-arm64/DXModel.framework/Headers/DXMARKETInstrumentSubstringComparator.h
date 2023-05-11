
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETInstrumentSubstringComparator_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator || defined(INCLUDE_DXMARKETInstrumentSubstringComparator))
#define DXMARKETInstrumentSubstringComparator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

@interface DXMARKETInstrumentSubstringComparator : NSObject < JavaUtilComparator >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)substring;

- (jint)compareWithId:(NSString *)one
               withId:(NSString *)two;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETInstrumentSubstringComparator)

FOUNDATION_EXPORT void DXMARKETInstrumentSubstringComparator_initWithNSString_(DXMARKETInstrumentSubstringComparator *self, NSString *substring);

FOUNDATION_EXPORT DXMARKETInstrumentSubstringComparator *new_DXMARKETInstrumentSubstringComparator_initWithNSString_(NSString *substring) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETInstrumentSubstringComparator *create_DXMARKETInstrumentSubstringComparator_initWithNSString_(NSString *substring);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETInstrumentSubstringComparator)

@compatibility_alias ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator DXMARKETInstrumentSubstringComparator;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSubstringComparator")
