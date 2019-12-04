//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSIAPDefaults, BKSLockdownDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults
{
    BKSLockdownDefaults *_lazy_lockdownDefaults;
    BKSIAPDefaults *_lazy_iapDefaults;
    BKSPersistentConnectionDefaults *_lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults *_lazy_springBoardDefaults;
}

@property(readonly, retain, nonatomic) BKSSpringBoardDefaults *springBoardDefaults;
@property(readonly, retain, nonatomic) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property(readonly, retain, nonatomic) BKSIAPDefaults *iapDefaults;
@property(readonly, retain, nonatomic) BKSLockdownDefaults *lockdownDefaults;

@end
