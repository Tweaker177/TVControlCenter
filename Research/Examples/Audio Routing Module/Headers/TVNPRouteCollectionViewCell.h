/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Audio Routing Module/TVNPBaseRouteCollectionViewCell.h>

@class TVNPRoute;

@interface TVNPRouteCollectionViewCell : TVNPBaseRouteCollectionViewCell {

	TVNPRoute* _route;

}

@property (nonatomic,retain) TVNPRoute * route;              //@synthesize route=_route - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForReuse;
-(void)setRoute:(TVNPRoute *)arg1 ;
-(TVNPRoute *)route;
-(void)volumeSliderValueChanged:(id)arg1 ;
-(void)_updateMusicBarState;
-(void)_updateVolumeState;
-(void)_updateMultiSelectionState;
@end

