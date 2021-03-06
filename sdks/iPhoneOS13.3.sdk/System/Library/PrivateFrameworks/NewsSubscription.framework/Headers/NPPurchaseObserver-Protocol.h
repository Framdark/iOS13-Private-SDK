//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FCOngoingPurchaseEntry, NPPurchaseContext, NSError, NSString;

@protocol NPPurchaseObserver
- (void)purchaseDidFailWithInvalidReceiptFor:(NSString *)arg1 purchaseContext:(NPPurchaseContext *)arg2 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg3;
- (void)purchaseDidFailFor:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3 purchaseContext:(NPPurchaseContext *)arg4 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg5;
- (void)purchaseDidSucceedOutsideNewsAppFor:(NSString *)arg1 purchaseContext:(NPPurchaseContext *)arg2;
- (void)purchaseDidSucceedFor:(NSString *)arg1 purchaseReceipt:(NSString *)arg2 chargeCurrencyCode:(NSString *)arg3 purchaseContext:(NPPurchaseContext *)arg4 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg5;
@end

