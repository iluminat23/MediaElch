#pragma once

#include "data/Locale.h"
#include "scrapers/ScraperConfiguration.h"
#include "settings/Settings.h"
#include "utils/Meta.h"

namespace mediaelch {
namespace scraper {

class AebnConfiguration : public ScraperConfiguration
{
public:
    explicit AebnConfiguration(Settings& settings);
    virtual ~AebnConfiguration() = default;

    void init() override;

    ELCH_NODISCARD static QVector<Locale> supportedLanguages();
    ELCH_NODISCARD static QString defaultGenre();

public:
    ELCH_NODISCARD Locale language();
    void setLanguage(const Locale& value);
    ELCH_NODISCARD static mediaelch::Locale defaultLocale();

    ELCH_NODISCARD QString genreId();
    void setGenreId(const QString& value);
};

} // namespace scraper
} // namespace mediaelch
