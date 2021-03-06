//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKMessagesSearchController : CKMessageTypeSearchController
{
}

+ (Class)cellClass;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklook;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (NSDirectionalEdgeInsets)additionalGroupInsets;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (NSUInteger)maxResultsForMode:(NSUInteger)arg1;
- (void)searchWithText:(id)arg1 mode:(NSUInteger)arg2;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;

@end

