//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class NSString;

@interface DOMMediaList : DOMObject
{
}

- (void)appendMedium:(id)arg1;
- (void)deleteMedium:(id)arg1;
- (id)item:(unsigned int)arg1;
@property(readonly) unsigned int length;
@property(copy) NSString *mediaText;
- (void)dealloc;

@end

