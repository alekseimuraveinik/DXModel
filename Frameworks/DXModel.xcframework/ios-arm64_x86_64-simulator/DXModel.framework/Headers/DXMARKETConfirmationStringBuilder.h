
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETConfirmationStringBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder || defined(INCLUDE_DXMARKETConfirmationStringBuilder))
#define DXMARKETConfirmationStringBuilder_

@protocol DXMARKETCharSequenceBuilder;
@protocol JavaLangCharSequence;

@interface DXMARKETConfirmationStringBuilder : NSObject {
 @public
  NSString *newLine_;
}

#pragma mark Public

- (id)getBuilderHelper;

- (id<JavaLangCharSequence>)getConfirmationStringWithId:(id)object
                        withDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)charSequence;

#pragma mark Protected

- (instancetype __nonnull)initWithId:(id)builderHelper;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETConfirmationStringBuilder)

J2OBJC_FIELD_SETTER(DXMARKETConfirmationStringBuilder, newLine_, NSString *)

FOUNDATION_EXPORT void DXMARKETConfirmationStringBuilder_initWithId_(DXMARKETConfirmationStringBuilder *self, id builderHelper);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETConfirmationStringBuilder)

@compatibility_alias ComDevexpertsDxmarketClientUtilConfirmationStringBuilder DXMARKETConfirmationStringBuilder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilConfirmationStringBuilder")
