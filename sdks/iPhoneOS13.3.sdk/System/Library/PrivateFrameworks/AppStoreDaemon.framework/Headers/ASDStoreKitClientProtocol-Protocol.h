//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString;

@protocol ASDStoreKitClientProtocol <NSObject>
- (void)shouldContinueTransaction:(NSDictionary *)arg1 withNewStorefront:(NSString *)arg2 replyBlock:(void (^)(BOOL))arg3;
- (void)storefrontChanged:(NSDictionary *)arg1;
- (void)downloadRemoved:(NSDictionary *)arg1;
- (void)downloadStatusChanged:(NSDictionary *)arg1;
- (void)downloadAdded:(NSDictionary *)arg1;
- (void)removedTransactions:(NSArray *)arg1;
- (void)updatedTransactions:(NSArray *)arg1;
@end

