//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString;

@protocol FCPaymentTransactionManagerDelegate
- (void)transactionFailedWithProductID:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3;
- (void)transactionPurchasedWithProductID:(NSString *)arg1;
@end
