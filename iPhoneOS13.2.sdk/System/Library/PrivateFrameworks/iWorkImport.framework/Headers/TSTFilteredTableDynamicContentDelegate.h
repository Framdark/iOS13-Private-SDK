//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTLayoutDynamicContentProtocol-Protocol.h>

@class NSString, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableInfo *_tableInfo;
}

@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (_Bool)dynamicContentMustDrawOnMainThread;
- (_Bool)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (id)initWithTableInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
