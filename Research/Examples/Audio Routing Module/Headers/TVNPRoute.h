/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, TVNPRoutingDestination;

@interface TVNPRoute : NSObject {

	NSString* _title;
	NSString* _routeUID;
	unsigned long long _deviceType;
	BOOL _local;
	BOOL _canBeGrouped;
	unsigned long long _selectionState;
	NSNumber* _volumeLevel;
	TVNPRoutingDestination* _destination;
	BOOL _silentPrimary;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * routeUID;                                      //@synthesize routeUID=_routeUID - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                          //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,getter=isLocal,nonatomic) BOOL local;                              //@synthesize local=_local - In the implementation block
@property (assign,nonatomic) BOOL canBeGrouped;                                      //@synthesize canBeGrouped=_canBeGrouped - In the implementation block
@property (nonatomic,retain) TVNPRoutingDestination * destination;                   //@synthesize destination=_destination - In the implementation block
@property (assign,getter=isSilentPrimary,nonatomic) BOOL silentPrimary;              //@synthesize silentPrimary=_silentPrimary - In the implementation block
@property (assign,nonatomic) unsigned long long selectionState;                      //@synthesize selectionState=_selectionState - In the implementation block
@property (nonatomic,copy) NSNumber * volumeLevel;                                   //@synthesize volumeLevel=_volumeLevel - In the implementation block
-(id)init;
-(id)_init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDestination:(TVNPRoutingDestination *)arg1 ;
-(TVNPRoutingDestination *)destination;
-(BOOL)isLocal;
-(unsigned long long)selectionState;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(unsigned long long)deviceType;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(BOOL)canBeGrouped;
-(void)setLocal:(BOOL)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(NSString *)routeUID;
-(NSNumber *)volumeLevel;
-(void)setVolumeLevel:(NSNumber *)arg1 ;
-(void)setCanBeGrouped:(BOOL)arg1 ;
-(BOOL)isSilentPrimary;
-(void)setSilentPrimary:(BOOL)arg1 ;
@end
