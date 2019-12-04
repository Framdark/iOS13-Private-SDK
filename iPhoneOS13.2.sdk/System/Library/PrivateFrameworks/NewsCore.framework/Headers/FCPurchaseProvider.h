//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPurchaseProviderType-Protocol.h>

@class FCPrivateChannelMembershipController, FCPurchaseController, NSSet, NSString;

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType>
{
    FCPurchaseController *_purchaseController;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
- (id)initWithPurchaseController:(id)arg1 privateChannelMembershipController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
