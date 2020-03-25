//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFContext-Protocol.h>

@class NFCallbackStore, NSMutableDictionary;

@interface NFContext : NSObject <NFContext>
{
    NFCallbackStore *_callbackStore;
    NSMutableDictionary *_objects;
}

@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NFCallbackStore *callbackStore; // @synthesize callbackStore=_callbackStore;
// - (void).cxx_destruct;
- (id)mergeWithContext:(id)arg1;
- (id)resolveForKey:(id)arg1;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(id /* CDUnknownBlockType */)arg3;
- (void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(id /* CDUnknownBlockType */)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(id /* CDUnknownBlockType */)arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(id /* CDUnknownBlockType */)arg3;
- (void)unsafeUseObject:(id)arg1 forKey:(id)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forKey:(id)arg2;
- (void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forProtocol:(id)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
- (id)initWithCallbackStore:(id)arg1;

@end
