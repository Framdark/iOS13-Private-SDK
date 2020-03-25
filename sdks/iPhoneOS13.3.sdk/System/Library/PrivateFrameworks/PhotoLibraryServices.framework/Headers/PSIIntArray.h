//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSIIntArray : NSObject
{
    struct sqlite3_intarray _elementArray;
    long long _staticElementBuffer[256];
    long long _elementBuffer;
    NSUInteger _elementBufferSize;
    BOOL _freeOnUnprepare;
}

- (void)unbind;
- (void)bindElements:(const long long )arg1 numberOfElements:(NSUInteger)arg2;
- (void)bindElements:(struct __CFArray )arg1 range:(_NSRange)arg2;
- (void)bindElements:(struct __CFSet )arg1;
- (void)_unprepare;
- (void)unprepare;
- (void)_prepareForNumberOfElements:(NSUInteger)arg1;
- (void)prepareForNumberOfElements:(NSUInteger)arg1;
@property(readonly, nonatomic) long long elementBuffer;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 database:(struct sqlite3 )arg2;

@end
