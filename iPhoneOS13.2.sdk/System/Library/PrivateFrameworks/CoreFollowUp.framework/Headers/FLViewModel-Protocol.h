//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FLFollowUpItem, NSArray;

@protocol FLViewModel 
- (void)setItemChangeHandler:(void (^)(void))arg1;
- (NSArray *)allPendingItems;

@optional
- (void)refreshItemsForItem:(FLFollowUpItem *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)refreshItems:(NSArray *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (NSArray *)groups;
@end
