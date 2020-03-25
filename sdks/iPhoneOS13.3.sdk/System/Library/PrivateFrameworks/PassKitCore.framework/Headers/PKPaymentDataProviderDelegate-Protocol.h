//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, NSString, PKFelicaPassProperties, PKPaymentMessage, PKPaymentTransaction, PKTransitPassProperties;

@protocol PKPaymentDataProviderDelegate <NSObject>

@optional
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithFelicaPassProperties:(PKFelicaPassProperties *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveBalanceUpdate:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(BOOL)arg2;
@end

