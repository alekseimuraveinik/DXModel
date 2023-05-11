
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCharSequenceBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilCharSequenceBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCharSequenceBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCharSequenceBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilCharSequenceBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCharSequenceBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCharSequenceBuilder || defined(INCLUDE_DXMARKETCharSequenceBuilder))
#define DXMARKETCharSequenceBuilder_

@protocol JavaLangCharSequence;

@protocol DXMARKETCharSequenceBuilder < JavaObject >

- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

- (void)removeSpanWithId:(id)what;

- (id<DXMARKETCharSequenceBuilder>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

- (id<DXMARKETCharSequenceBuilder>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                                          withInt:(jint)start
                                                          withInt:(jint)end;

- (id<DXMARKETCharSequenceBuilder>)appendWithChar:(jchar)c;

- (id<JavaLangCharSequence>)toCharSequence;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCharSequenceBuilder)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCharSequenceBuilder)

#define ComDevexpertsDxmarketClientUtilCharSequenceBuilder DXMARKETCharSequenceBuilder

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCharSequenceBuilder")
