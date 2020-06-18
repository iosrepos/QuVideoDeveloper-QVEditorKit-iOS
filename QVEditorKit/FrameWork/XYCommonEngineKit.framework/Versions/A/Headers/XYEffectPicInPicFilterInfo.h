//
//  XYEffectFilterInfo.h
//  XYCommonEngineKit
//
//  Created by 夏澄 on 2020/6/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XYEffectPicInPicFilterInfo : NSObject

/// 滤镜路径
@property (nonatomic, copy) NSString *filterPath;

/// 滤镜程度,0~100    
@property (nonatomic, assign) NSInteger filterLevel;

@end

NS_ASSUME_NONNULL_END
