//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMFObjectObserver : HMFObject
{
    id _observedObject;
    id /* block */ _deallocationBlock;
    NSUUID *_identifier;
    unsigned long long _cachedHash;
}

@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy) id /* block */ deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
@property(readonly) __weak id observedObject; // @synthesize observedObject=_observedObject;
- (void)_stopObserving;
- (void)_startObserving;
- (id)observerKey;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1;
- (id)init;

@end
