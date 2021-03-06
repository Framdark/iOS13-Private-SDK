//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFEmailAddress;

@interface WFEmailAddressContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)itemsWithTextCheckingResult:(id)arg1;
- (void)generateObjectRepresentations:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic) WFEmailAddress *emailAddress;
- (BOOL)getListAltText:(id /* CDUnknownBlockType */)arg1;

@end

