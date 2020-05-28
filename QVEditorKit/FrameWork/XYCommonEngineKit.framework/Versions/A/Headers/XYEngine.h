//
//  XYEngine.h
//  XiaoYing
//
//  Created by xuxinyuan on 13-4-26.
//  Copyright (c) 2013年 XiaoYing Team. All rights reserved.
//

#import "XYEngineParam.h"
#import <UIKit/UIKit.h>

#define XY_TIMESCALE_DIV_4 0.25
#define XY_TIMESCALE_DIV_2 0.5
#define XY_TIMESCALE_NORMAL 1.0
#define XY_TIMESCALE_MUL_2 2.0
#define XY_TIMESCALE_MUL_4 4.0

@protocol XYEngineTarceLogDelegate <NSObject>

- (void)xYEngineTarceLog:(NSString *)log;

- (void)xYEnginePrintLog:(NSString *)log;

- (void)xYEventLog:(NSString *)eventId attributes:(NSDictionary *)attributes;// 小影业务需要实现日志收集

@end

@interface XYEngine : NSObject

@property (nonatomic, weak) id<CXiaoYingTemplateAdapter> templateDelegate;
@property (nonatomic, weak) id<XYEngineTarceLogDelegate> engineTarceLogDelegate;

+ (XYEngine *)sharedXYEngine;

//templateAdapter和filePathAdapter必须在引擎初始化的时候设置
- (SInt32)initEngineWithParam:(XYEngineParam *)param
              templateAdapter:(id<CXiaoYingTemplateAdapter>)templateAdapter
              filePathAdapter:(id<CXiaoYingFilePathAdapter>)filePathAdapter
                  metalEnable:(BOOL)metalEnable;

- (void)uninit;

- (CXiaoYingEngine *)getCXiaoYingEngine;

- (UInt32)getVersion;

- (void)setTextTransformer:(id<CXiaoyingTextTransformer>)textTransformer;

- (void)setFontAdapter:(id<CXiaoYingFontAdapter>)fontAdapter;

- (BOOL)getMetalEnable;

@end