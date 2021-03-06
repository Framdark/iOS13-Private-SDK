//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRSCardServing-Protocol.h>
#import <CardKit/CRSIdentifiedServing-Protocol.h>

@class NSString;
@protocol _CRKSendMessageCardFactoryDelegate;

@interface _CRKSendMessageCardFactory : NSObject <CRSCardServing, CRSIdentifiedServing>
{
    id <_CRKSendMessageCardFactoryDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <_CRKSendMessageCardFactoryDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (NSUInteger)servicePriorityForRequest:(id)arg1;
- (BOOL)canSatisfyCardRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)buildCardForContent:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end

